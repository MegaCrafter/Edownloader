#include <iostream>

void Edownloader_version() {
	std::string _version_ = "1.0.0";
	std::cout << _version_ << std::endl;
}

void main_menu() {
	std::cout << "------ Welcome to Edownloader ------\n"
            << "1.) Install Video (Default: Mp4 and Best Quality)\n"
            << "2.) Install Video mp3\n"
            << "3.) Install Playlist videos\n" << std::endl;	
}

void install_video() {
	int option =  0;

	std::cout << "Please choose option - - > ";
  std::cin >> option;

  if(option == 1) {
    std::string video_url;
    std::string youtube_dl = "youtube-dl ";
    std::cout << "Type an video url link - - > ";
    std::cin >> video_url;
    std::string install = youtube_dl + video_url;
    const char* command = install.c_str();
    std::system(command);
    std::cout << "İnstalling finished!\n";
  }

  else if (option == 2) {
    std::string video_url;
    std::string youtube_dl = "youtube-dl -x --audio-format mp3 ";
    std::cout << "Type an video url link - -> ";
    std::cin >> video_url;
    std::string install = youtube_dl + video_url;
    const char* command = install.c_str();
    std::system(command);
    std::cout << "Installed finished!\n";
  }

  else if(option == 3) {
    std::string playlist_url;
  }
}
