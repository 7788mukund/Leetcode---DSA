class Solution {
    // Function to check wether the current letter is vowel or not
     bool isVowel(char ch ){
     return (ch=='a'||ch=='A'||
        ch=='e'||ch=='E'||
        ch=='i'||ch=='I'||
        ch=='o'||ch=='O'||
        ch=='u'||ch=='U'
        );
    }
public:
    string reverseVowels(string s) {
        

         int j =s.size()-1;
         int i =0;
    //using two pointer approach to reverse the vowels
    // TC = O(N)
    //Sc = O(1)

    // why is works - beaucse we know string has vowels from both side start and end
    // so as we need to reverse it so we will travese from front and back
    //whenever i index char and j index char is vowels we will reveerse them
    // else if the i is not vowels so increse its index
    // else decrese j index so that both come to right vovwel conatining index
        while(i<j){
           if(!isVowel(s[i])){
                i++;
           }
           else if(!isVowel(s[j])){
            j--;
           }
           else{
            swap(s[i],s[j]);
            i++;
            j--;
           }
        }
    return s;
    }
};