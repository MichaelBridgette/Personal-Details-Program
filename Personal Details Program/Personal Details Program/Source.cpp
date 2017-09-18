//Michael Bridgette
//18/09/2017
//program that takes user information.Records it, then displays all other users information

#include<iostream>
#include<string.h>
#include<fstream>
#include<sstream>

int main()
{
	std::string fileInfo = ""; //for display all the info
	std::fstream file; // the file that has all the info
	std::string name=""; //the users name
	int age= 0; //their age
	std::string gender=""; //their gender
	double income= 0; //how much they make
	std::string country= ""; //their country
	

	//all user inputs
	std::cout << "What is your name? " << std::endl;
	std::getline(std::cin, name);
	std::cout << "How old are you?" << std::endl;
	std::cin >> age;
	std::cout << "What is your gender?" << std::endl;
	std::cin >> gender;
	std::cout << "What is your income?" << std::endl;
	std::cin >> income;
	std::cout << "What country do you live in?" << std::endl;
	std::cin >> country;
	system("PAUSE");


	file.open("Personal Info.txt", std::ios_base::app); //open the text file and apprend(dont erase everything else on the file)
	//write all the info to the file
	file <<"Name: " <<name<<std::endl;
	file <<"Age: " <<age << std::endl;
	file <<"Gender: " <<gender << std::endl;
	file <<"Income: " <<income << std::endl;
	file << "Country: "<<country << std::endl;
	file << "******************" << std::endl;
	file.close(); //close the file

	//display all the info that is currently recorded
	file.open("Personal Info.txt");
	std::cout << "ALL DATA" << std::endl;
	while (!file.eof())
	{
		std::getline(file, fileInfo);
		std::cout<<fileInfo<<std::endl;
	}
	file.close();
	
	system("PAUSE");

	
}