#include "User.h"

User::User(const QString& username, const QString& password, const QString& role)
    : username(username), password(password), role(role)
{
}

QString User::getUsername() const
{
    return username;
}

QString User::getPassword() const
{
    return password;
}

QString User::getRole() const
{
    return role;
}

void User::setUsername(const QString& username)
{
    this->username = username;
}

void User::setPassword(const QString& password)
{
    this->password = password;
}

void User::setRole(const QString& role)
{
    this->role = role;
}
