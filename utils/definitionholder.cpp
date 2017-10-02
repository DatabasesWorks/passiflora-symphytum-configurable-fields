/*
 *  Copyright (c) 2012 Giorgio Wicklein <giowckln@gmail.com>
 */

//-----------------------------------------------------------------------------
// Hearders
//-----------------------------------------------------------------------------

#include "definitionholder.h"

#include <QtCore/QString>
#include <QtCore/QDate>


//-----------------------------------------------------------------------------
// Static variables initialization
//-----------------------------------------------------------------------------

QString DefinitionHolder::VERSION = "2.1";
QString DefinitionHolder::NAME = "Spagyrik Datenbank Passiflora";
QString DefinitionHolder::COMPANY = "enmed";
QString DefinitionHolder::DOMAIN_NAME = "enmed.de";
QString DefinitionHolder::UPDATE_URL = "https://giowck.github.io/symphytum/update/symphytum/updates";
QString DefinitionHolder::DOWNLOAD_URL = "https://giowck.github.io/symphytum/update.html";
int DefinitionHolder::SOFTWARE_BUILD = 6;
int DefinitionHolder::DATABASE_VERSION = 2;
bool DefinitionHolder::APP_STORE = false;
QString DefinitionHolder::COPYRIGHT =
        QString("Copyright &copy; 2014-%1 Giorgio Wicklein"
                "<br />Copyright &copy; 2012-2014 GIOWISYS Software UG (haftungsbeschr%2nkt)")
        .arg(QDate::currentDate().toString("yyyy"))
        .arg(QChar(228)); // 228=umlaut a

