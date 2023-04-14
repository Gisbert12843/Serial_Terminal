#include "wholeinclude_orientation_visualizer.h"


#include "Serial.h"





int main(int argc, char** argv)
{
		boost::asio::io_service io;

	//userinput regarding the Port to be chosen
	std::string init_answer;
	do {
		init_answer = AutoDrones::choose_serial(io);
	} while (init_answer == "");
	//

	//inits the serial_port with the port chosen by the user
	boost::asio::serial_port port(io, init_answer);

	system("CLS");

	while(1)
	{
		AutoDrones::readSerial(io, port);
	}


	std::cout << std::endl << std::endl << "END";
	std::cin.ignore();
	return 0;
}
