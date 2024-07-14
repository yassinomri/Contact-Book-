#include "utilisateur.h"

Utilisateur::Utilisateur() {}

Utilisateur::Utilisateur(QString username, QString password, QString role)
    : username(username), password(password), role(role) {}

QString Utilisateur::getUsername() const {
    return username;
}

void Utilisateur::setUsername(const QString& username) {
    this->username = username;
}

QString Utilisateur::getPassword() const {
    return password;
}

void Utilisateur::setPassword(const QString& password) {
    this->password = password;
}

QString Utilisateur::getRole() const {
    return role;
}

void Utilisateur::setRole(const QString& role) {
    this->role = role;
}
