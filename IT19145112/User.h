#pragma once

class User
{
private:

    int userId;
    char password[20];

public:

    void login(int UserID, const char Password[]);
    void createUserAccount(int UserID, const char Password[]);
    void accountUpdate(int UserID);
    void viewAccount(int UserID);
    void accountDelete();

};