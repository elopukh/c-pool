// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Logger.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: elopukh <elopukh@student.unit.ua>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/10/02 19:16:08 by elopukh           #+#    #+#             //
//   Updated: 2018/10/02 19:16:09 by elopukh          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef LOGGER_HPP
#define LOGGER_HPP
#include <iostream>
#include <ctime>
#include <fstream>
class Logger
{
    private:
        std::string filename;
        void logToConsole(std::string const & str);
        void logToFile(std::string const & str);
        std::string makeLogEntry(std::string const & string);
    public:
        void setFilename(std::string str);
        void log(std::string const & dest, std::string const & message);
};

#endif