//
// Created by Michael Yao on 1/18/2024.
//

#ifndef FINAL_PROJECT_USERNODE_H
#define FINAL_PROJECT_USERNODE_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>

class UserNode {
    int userID;
    std::string name;
    std::map<int, std::vector<int>> friends;
    std::map<int, postNode>;

public:
    UserNode();
    UserNode(std::string name);
    addFriend(int friendID);
    addPost(int postID);
    
};


#endif //FINAL_PROJECT_USERNODE_H
