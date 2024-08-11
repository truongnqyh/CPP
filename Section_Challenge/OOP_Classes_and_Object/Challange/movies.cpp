#include <iostream>
#include "Movies.h"

using namespace std;

Movies::Movies() {};


Movies::~Movies() {};

bool Movies::add_movie(string name, string rating, int watched) {
	for (const auto &movie: movies){
		if(movie.get_name() == name) {return false; }
	}
	Movie temp{name, rating, watched};
	movies.push_back(temp);
	
	return true;
}
bool Movies::increment_watched(string name) {
	for (auto &movie: movies){
		if(movie.get_name() == name) {
			movie.increment_watched();
			return true;
		}
	}
	
	return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        cout << "No movies to display" << endl;
    } 
	else {
        cout << "\n===================================" << endl;
        for (const auto &movie: movies)
            movie.display();
        cout << "\n===================================" << endl;
	}
}
