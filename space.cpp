#include <iostream>

int main() {
  
  double earth_weight;
  double destination_weight;
  int planet;

  std::cout << "What's your earth weight? \n";
  std::cout << "Earth Weight: \n";
  std::cin >> earth_weight;

  std::cout << "What planet do you want to fight on ?\n";
  std::cout << "The planets are: \n1. Mercury \n2. Venus \n3. Mars \n4. Jupiter \n5. Saturn \n6. Uranus \n7. Neptune.\n";
  std::cout << "Enter the number of your choice: \n";
  std::cin >> planet;
  
  switch(planet){
    case 1:
      //Mercury
      destination_weight = earth_weight * 0.38;

      std::cout << "You chose Mercury! Your weight in here is: " << destination_weight << std::endl;
    break;

    case 2:
      //Venus
      destination_weight = earth_weight * 0.91;

      std::cout << "You chose Venus! Your weight in here is: " << destination_weight << std::endl;
    break;    

    case 3:
      //Mars
      destination_weight = earth_weight * 0.38;

      std::cout << "You chose Mars! Your weight in here is: " << destination_weight << std::endl;
    break;    

    case 4:
      //Jupiter
      destination_weight = earth_weight * 2.34;

      std::cout << "You chose Jupiter! Your weight in here is: " << destination_weight << std::endl;
    break; 

    case 5:
      //Saturn
      destination_weight = earth_weight * 1.06;

      std::cout << "You chose Saturn! Your weight in here is: " << destination_weight << std::endl;
    break; 

    case 6:
      //Uranus
      destination_weight = earth_weight * 0.92;

      std::cout << "You chose Uranus! Your weight in here is: " << destination_weight << std::endl;
    break;

    case 7:
      //Neptune
      destination_weight = earth_weight * 1.19;

      std::cout << "You chose Neptune! Your weight in here is: " << destination_weight << std::endl;
    break;  
    default:
      std::cout << "You didn't chose anything! \n";
  } 

  return 0;
}
