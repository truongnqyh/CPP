#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

using namespace std;

class Movie{
private:
	string name;
	string rating;
	int watched;
public:
	Movie(string name, string rating, int watched);
	Movie(const Movie &source);
	~Movie();
	void set_name(string name) {this->name = name; }
	string get_name() const {return name; }
	void set_rating(string name) {this->rating = rating; }
	string get_rating() const {return rating; }
	void set_watched(string name) {this->watched = watched; }
	int get_watched() const {return watched; }
	void increment_watched() { ++watched; }
	void display() const ;
};

#endif // _MOVIE_H_
