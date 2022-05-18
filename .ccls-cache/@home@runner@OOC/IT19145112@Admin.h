#pragma once

class Admin
{
private:
  char name[20];
  int contactNo;
  char email[20];

public:
  void logIn(const char Name[], int ContactNo, const char Email[]);
  void viewUserAccounts(const char Name[], int ContactNo, const char Email[]);
  void searchUser(int ContactNo);
  void deleteUserAccounts(int ContactNo);
  void logOut();
};