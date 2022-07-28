#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H
#include "User.h"

class userControl{
public:
    static void Add(User* u){
        v.append(u);
    }
    static QVector<User*> get(){
        return v;
    }
    static QVector<User*> v;
};
#endif // USERCONTROLLER_H
