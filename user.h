#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    User(const QString& username = "", const QString& password = "", const QString& role = "");

    QString getUsername() const;
    QString getPassword() const;
    QString getRole() const;

    void setUsername(const QString& username);
    void setPassword(const QString& password);
    void setRole(const QString& role);

private:
    QString username;
    QString password;
    QString role;
};

#endif // USER_H
