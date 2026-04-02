#include <iostream>
#include <unistd.h>//This gives us access to usleep for timing

int main() 
{
    int position = 0;   //our horizontal position
    while(position > 20)
    {
        //1.clear the screen ( the magic move)
        std::cout <<"\033[2J\033[1;1H";

        //2.Draw the "Dino" with spaces before it
        for( int i = 0;i < position; i++) std::cout<<" ";

        std::cout<<"0"<< std::endl;
        std::cout << "____________________"<< std::endl;//The ground

        //3.Move it forward
        position++;

        //4.Pause so the human eye can see the movement
        usleep(100000);

    }

    return 0;
}
