#include <iostream>

void Edownloader_version() {
	std::string _version_ = "1.0.0";
	std::cout << _version_ << std::endl;
}

void main_menu() {
	std::cout << "------ Welcome to Edownloader ------\n"
            << "1.) Install Video\n"
            << "2.) Install Playlist Videos \n"
            << "3.) Soon\n" << std::endl;	
}

void install_video() {
	int option =  0;

	std::cout << "Please choose option - - > ";
  std::cin >> option;

  if(option == 1) {
    std::string video_url;
    std::string quality;
    std::string youtube_dl = "youtube-dl ";
    std::cout << "Type an video url link - - > ";
    std::cin >> video_url;
    std::string install = youtube_dl + video_url;
    const char* command = install.c_str();
    std::system(command);
    std::cout << "İnstalling finished!\n";

  }
}
