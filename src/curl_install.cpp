#include <iostream>

void install_depends() {
	#ifdef __unix__
	system("sudo curl -L https://yt-dl.org/downloads/latest/youtube-dl -o /usr/local/bin/youtube-dl && sudo chmod a+rx /usr/local/bin/youtube-dl && sudo pip install --upgrade youtube_dl");
	#endif

	#ifdef __WIN32_
	system(); // Burası Windows için curl ile youtube-dl yi exe olarak çekcez dependleri kuracaz hazır hale getircez MegaCrafter bu iş sende reis :D 
	#endif
}
