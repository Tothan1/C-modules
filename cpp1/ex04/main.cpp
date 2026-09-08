/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <tle-rhun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:09:26 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/09/08 11:23:25 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstdlib>

std::string getContentFilename(std::string filename)
{
	std::string buffer;
	std::ifstream ifs(filename.c_str());
	std::string contentFilename;
	
	if(ifs.is_open() != 1)
	{
		std::cout << "please enter a existing file!" << std::endl;
		return("");
	}
	while(getline(ifs, buffer))
		contentFilename += buffer + "\n";
	ifs.close();
	return(contentFilename);
}
void WriteInFilenameReplace(std::string contentFilename, std::string filenameReplace, char **av)
{
	std::string s1;
	std::string s2;
	int small;
	int find;
	int i;
	int indexstart;


	s1 = av[2];
	s2 = av[3];
	if(s1.size() == 0 || s2.size() == 0)
	{
		std::cerr << "Enter a field argument!" << std::endl;
		return ;
	}
	std::ofstream ofs(filenameReplace.c_str());
	while(contentFilename.find(s1) != std::string::npos)
	{
		find = 0;
		i = 0;
		indexstart = contentFilename.find(s1);
		if (s1.size()> s2.size())
			small = s2.size();
		else
			small = s1.size();
		while ( i < small)
		{
			contentFilename[indexstart] = s2[find]; 
			find++;
			i++;
			indexstart ++;
		}
		if(s1.size()> s2.size())
			contentFilename.erase( indexstart, s1.size()-s2.size());
		else if (s1.size() < s2.size())
			contentFilename.insert( indexstart, &s2[find]);
	}
	ofs << contentFilename;
	ofs.close();
}
int main (int ac, char **av)
{
	std::string filenameReplace;
	std::string filename;
	
	std::string contentFilename;
	
	if(ac != 4)
	{
		std::cout << "wrong number of arguments!" << std::endl;
		return(1);
	}
	filename = av[1];

	contentFilename = getContentFilename(filename);
	if(contentFilename.empty())
		return(1);
	filenameReplace = filename + ".replace";
	WriteInFilenameReplace(contentFilename, filenameReplace, av);
}