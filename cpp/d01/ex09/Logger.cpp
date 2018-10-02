// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:15:55 by elopukh           #+#    #+#             //
//   Updated: 2018/10/02 19:15:56 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Logger.hpp"
    void Logger::logToConsole(std::string const & str)
    {
        std::cout << this->makeLogEntry(str) << std::endl;
    }
    void Logger::logToFile(std::string const & str)
    {
        std::ofstream ofs(this->filename, std::ios_base::app);
        ofs << this->makeLogEntry(str);
        ofs.close();
    }
    std::string Logger::makeLogEntry(std::string const & str)
    {
        time_t rawtime;
        struct tm * timeinfo;
        char buffer[80];
        time (&rawtime);
        timeinfo = localtime(&rawtime);
        strftime(buffer,sizeof(buffer),"%d-%m-%Y %H:%M:%S",timeinfo);
        std::string stime(buffer);
        stime.append(str); 
        return (stime);
    }
    void Logger::setFilename(std::string str)
    {
        this->filename = str;
    }
    void Logger::log(std::string const & dest, std::string const & message)
    {
        void (Logger::*arr[2])(const std::string &) = {&Logger::logToConsole, &Logger::logToFile};
        if (dest == "console")
            (this->*arr[0])(message);
        else if (dest == "file")
            (this->*arr[1])(message);
            else return;
    }
