#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <QString>

class Utilisateur {
private:
    QString username;
    QString password;
    QString role;

public:
    Utilisateur();
    Utilisateur(QString username, QString password, QString role);

    QString getUsername() const;
    void setUsername(const QString& username);

    QString getPassword() const;
    void setPassword(const QString& password);

    QString getRole() const;
    void setRole(const QString& role);
};

#endif // UTILISATEUR_H
