#pragma once
#include "wholeinclude_orientation_visualizer.h"


static std::exception global_exception;


namespace AutoDrones
{
	void print_screen(std::size_t bytes_transferred, char* buffer);
	void handle_read(const boost::system::error_code& error, std::size_t bytes_transferred, char* buffer, boost::asio::serial_port& serial_port);
	void readSerial(boost::asio::io_service& io, boost::asio::serial_port& serialport);
	std::string choose_serial(boost::asio::io_service& io);
}