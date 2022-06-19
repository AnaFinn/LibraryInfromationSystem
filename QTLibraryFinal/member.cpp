#include "member.h"

Member::Member(QObject *parent)
    : QObject{parent}
{

}

void Member::setName(QString newName)
{
    name = newName;
}

void Member::setPswd(QString newPassword)
{
    password=newPassword;
}

void Member::setEmail(QString newEmail)
{
    email=newEmail;
}

QString Member::getName()
{
return name;
}

QString Member::getPswd()
{
return password;
}

QString Member::getEmail()
{
return email;
}
