#include <iostream>
#include "ex03-library.h"
using namespace std;

// Do not modify
SongDatabase::SongDatabase() {
    this->songs.push_back("Penny Lane");
    this->songsInfo["Penny Lane"] = {"https://youtu.be/S-rB0pHI9fU", 8};

    this->songs.push_back("Trololo");
    this->songsInfo["Trololo"] = {"https://youtu.be/oavMtUWDBTM", 10};

    this->songs.push_back("Ob-La-Di, Ob-La-Da");
    this->songsInfo["Ob-La-Di, Ob-La-Da"] = {"https://youtu.be/_J9NpHKrKMw", 2};

    this->songs.push_back("Don't Worry, Be Happy");
    this->songsInfo["Don't Worry, Be Happy"] = {"https://youtu.be/d-diB65scQU", 3};

    this->songs.push_back("Leave My Kitten Alone");
    this->songsInfo["Leave My Kitten Alone"] = {"https://youtu.be/7BKsy9-Bvok", 5};
}

// Task 3(a).  Implement this method
void SongDatabase::display() {
    // Write your code here

    for (auto &curr_song: songs) {
        Info curr_info = songsInfo[curr_song];
        string val =  "title=" + curr_song + "; url=" + curr_info.url + "; score=" + to_string(curr_info.score);
        cout << val << endl;
    }


}

// Task 3(b).  Implement this method
bool SongDatabase::addSong(string title, string url, unsigned int score) {
    // Write your code here

    if (std::count(songs.begin(), songs.end(), title)) return false;
    if (score > 10) return false;

    songs.push_back(title);
    songsInfo[title] = {url, score};

    return true;
}

// Task 3(a).  Implement this method
void SongDatabase::searchSongs(string howGood) {
    // Write your code here

    int minRate, maxRate;

    if (howGood == "abysmal") {
        minRate = 0;
        maxRate = 3;

    } else if (howGood == "lousy") {
        minRate = 3;
        maxRate = 5;


    } else if (howGood == "meh") {
        minRate = 5;
        maxRate = 7;

    } else if (howGood == "cool") {
        minRate = 7;
        maxRate = 9;


    } else if (howGood == "OMG") {
        minRate = 9;
        maxRate = 9999999;

    }

    for (const auto &song : songs){

        Info song_info = songsInfo[song];
        int score = (int )song_info.score;

        if (minRate <= score && score < maxRate ) {
            string val =  "title=" + song + "; url=" + song_info.url + "; score=" + to_string(score);
            cout << val << endl;

        }

    }


}
