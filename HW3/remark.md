# backwards
- There is a special character in the end of the string, namely the null character. For a string variable ``str`` with length ``n``, it's OK to access it with ``str[n]`` (we didn't substract your points for that), but I would suggest you to exclude it if you want to loop over the characters in the string, e.g.
  ```C++
  //note that we started from n-1
  for (int i = n-1; i>=0; i--){
    //do something for str[i];
  }
  ```
  or
  ```C++
  //note that n is not included
  for (int i = 0; i < n; i++){
    //do something for str[i];
  }
  ```

  
  

# second
test the following cases, 5 points for each
- 2 Q
- 2 2 Q
- 1 1 2 Q
- 1 1 2 2 Q
- 1 2 Q
- 1 2 2 Q
- 1 2 1 8 8 9 Q
- -7 -101 0 -2 17 Q

-5 points if the program fails to compile in visual studio, due to missing necessary headers.

