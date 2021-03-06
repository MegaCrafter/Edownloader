#include <iostream>

const std::string Edownloader_version = "1.0.0";

void main_menu() {
	std::cout << "------ Welcome to Edownloader v" << Edownloader_version << " ------\n"
              << "1.) Install Video (Default: Mp4 and Best Quality)\n"
              << "2.) Install Video mp3\n"
              << "3.) Install Playlist videos\n"
	          << "4.) Exit\n";	
}


void install_video() {
    int option = 0;
    
    do {
        main_menu();

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
        std::string youtube_dl = "youtube-dl --playlist-start 1 --playlist-end ";
        std::cout << "Type an playlist link - -> ";
        std::cin >> playlist_url;
        std::string end_num;
        std::cout << "What's last video number? - -> ";
        std::cin >> end_num;
        std::string install = youtube_dl + end_num + " " +  playlist_url;
        const char* command = install.c_str();
        system(command);
        std::cout << "Installation finished!";
    }

    } while(option != 4);
    
}
