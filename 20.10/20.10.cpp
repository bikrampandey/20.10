#include<iostream>
#include<string>
#include<queue>
#include<utility>


using namespace std;

struct user {
	std::string firstName;
	std::string lastName;
	std::string email;
	std::pair<std::string, std::string>address;
	std::string nftAvatar;
	std::string password;
	bool confirm=false;
};
bool validpassword(const std::string& password) {
	return password.length() > 8;
}

int main()
{
	std::queue<user>users;

	users.push({ "Terry","Medhurst","atuny0@sohu.com",{"1745 T Street Southeast" , "Washington"},"https://robohash.org/warrior.png" , false,});
	users.push({ "Sheldon","Quigley","hbingley1@plala.or.jp",{"6007 Applegate Lane", "Louisville" },"https://robohash.org/champion.png" ,false, });
	users.push({ "Terrill","Hills","rshawe2@51.la",{"560 Penstock Drive", "Birmingham" },"https://robohash.org/easyrider.png" ,false,  });
	
	while (!users.empty())
	{
		user currentuser = users.front();
		users.pop();

		std::cout << "Name: " << currentuser.firstName << " " << currentuser.lastName << std::endl;
		std::cout << "Email: " << currentuser.email << std::endl;
		std::cout << "Address: " << currentuser.address.first << ", " << currentuser.address.second << std::endl;
		std::cout << "NFT Avatar: " << currentuser.nftAvatar << std::endl;


		std::cout << "Confirm your details (yes/no): ";
		std::string confirmation;
		std::cin >> confirmation;


	}
}

