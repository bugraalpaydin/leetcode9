bool isPalindrome(int x) {
  long reversed = 0; // Declare reversed variable for reversing procces
  int original = x;  // Declare original variable for x
  int val = 0;
  if (x<0)
      false;         // If x negative, it can not be a palindrome integer

  while(x>0){    
    val = x%10;  // Set val variable to mode of x with 10 
    reversed = reversed * 10 + val; // The reversed value is multiplied by 10 in each cycle, then added by val  
    x /= 10;  // The x value is divided by 10 in each cycle
  }
  if (original == reversed)  
      return true;    //If original x and reversed x is equal return true
  else
      return false;  //If original x and reversed x is not equal return fasle

}
