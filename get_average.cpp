#include <array>
#include <iostream>

int main () { 

 int average            {}; 
 std::array<int ,5> nbr {};
 
  
 
 std::cin >> nbr[0] ;
 std::cin >> nbr[1] ;
 std::cin >> nbr[2] ;
 std::cin >> nbr[3] ;
 std::cin >> nbr[4] ;


 average = ( nbr[0] + nbr [1] +  nbr[2] + nbr [3]  +  nbr[4] )  /5 ;  

 std::cout << "La moyenne de ces nombre est de  " << average ;
 std::cout << std::endl                                      ;

}
