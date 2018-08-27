/*
Name: QtRpt
Version: 2.0.2
Web-site: http://www.qtrpt.tk
Programmer: Aleksey Osipov
E-mail: aliks-os@ukr.net
Web-site: http://www.aliks-os.tk

Copyright 2012-2018 Aleksey Osipov

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef EXAMPLEDLG14_H
#define EXAMPLEDLG14_H

#include <QDialog>
#include "qtrpt.h"

namespace Ui {
    class ExampleDlg14;
}

class ExampleDlg14 : public QDialog
{
    Q_OBJECT

public:
    explicit ExampleDlg14(QWidget *parent = 0);
    ~ExampleDlg14();

private:
    Ui::ExampleDlg14 *ui;

private slots:
    void print();
    void setField(RptFieldObject &);
    void setDSInfo(DataSetInfo &dsInfo);
};

#endif // EXAMPLEDLG14_H