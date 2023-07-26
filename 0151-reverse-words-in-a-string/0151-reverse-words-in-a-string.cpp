class Solution {
public:
    string reverseWords(string s) {
    size_t start=s.find_first_not_of(' ');
    size_t end=s.find_last_not_of(' ');    
    if(start==std::string::npos)
    return "";
    // Step 2: Reverse the order of words
    std::istringstream iss(s);
    std::string word, reversedString;
    while (iss >> word) {
        // Step 3: Append the word to the front of the reversedString
        if (!reversedString.empty()) {
            reversedString = word + ' ' + reversedString;
        } else {
            reversedString = word;
        }
    }

    return reversedString;
}
};