#include <iostream>
#include <fstream>


void install_depends() {
	#ifdef __unix__
    
    system("youtube-dl");
    system("echo $? >> out.txt");
    
    std::string line;
    std::ifstream out_file ("out.txt");
    
    if(out_file.is_open()) {
        while(getline(out_file ,line)) {
            if(line == "127") {
                system("sudo curl -L https://yt-dl.org/downloads/latest/youtube-dl -o /usr/local/bin/youtube-dl && sudo chmod a+rx /usr/local/bin/youtube-dl && sudo pip install --upgrade youtube_dl");
            }
            
           
        }
        out_file.close();
    }
    
    else {
        std::cout << "Unable to open file";
    }
	
	#endif

	#ifdef __WIN32_
	system(); // Burası Windows için curl ile youtube-dl yi exe olarak çekcez dependleri kuracaz hazır hale getircez MegaCrafter bu iş sende reis :D 
	#endif
}
