#include <iostream>
#include "Movies.h"

using namespace std;

void increment_watched(Movies &movies, string name);
void add_movie(Movies &movies, string name, string rating, int watched);

int main() {
    
    Movies my_movies;
    
    my_movies.display();
    
    add_movie(my_movies, "Conan", "PG-13",2);
    add_movie(my_movies,"Doraemon", "PG",5);
    add_movie(my_movies,"Sad Movie", "PG",7);
     
    my_movies.display();
    
    add_movie(my_movies,"Conan", "PG",7);
    add_movie(my_movies,"Doraemon", "PG",12);
 
    my_movies.display();
    
    increment_watched(my_movies,"Doraemon");
    increment_watched(my_movies,"Conan");
    
    my_movies.display();
    
    increment_watched(my_movies,"XXX");

    return 0;
}

void increment_watched(Movies &movies, string name) {
    if (movies.increment_watched(name)) {
        cout << name << " watch incremented" <<  endl;
    } else {
        cout << name << " not found" <<  endl;
    }
}

void add_movie(Movies &movies, string name, string rating, int watched) {
    if (movies.add_movie(name,rating,watched)) {
        cout << name << " added" << endl;
    } else {
        cout << name << " already exists" <<  endl;
    }
}
