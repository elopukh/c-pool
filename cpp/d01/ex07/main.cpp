// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 18:05:31 by elopukh           #+#    #+#             //
//   Updated: 2018/10/02 18:05:33 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
#include <fstream>

void readff(char *filename, std::string str1, std::string str2)
{
    std::string r;
    std::string start;
    std::string end;
   int pos = 0;
    std::ifstream fin (filename);
    if (!fin.is_open())
        std::cout << "File is not opened!\n";
    else
    {
        while (getline(fin,r))
        {
            while (r.length() > 0)
            {
                pos = r.find(str1);
                if (pos != -1)
                {
                    int a = pos + str1.length();
                    start = r.substr(0, pos);
                    end = r.substr(a);
                    r = end;
                    std::ofstream ofs("FILENAME.replace", std::ios_base::app);
                    ofs << start << str2;
                    ofs.close();
                }
                else
                {
                    std::ofstream ofs("FILENAME.replace", std::ios_base::app);
                    ofs << r << std::endl;
                    r.clear();
                    ofs.close();
                }
            }
        }
        fin.close();
    }
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        readff(argv[1], argv[2], argv[3]);
    }
    else 
    {
        std::cout << "USAGE: [filename] [s1] [s2]" << std::endl;
    }
    return (0);
}
