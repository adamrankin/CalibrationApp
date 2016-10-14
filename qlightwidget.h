/*=========================================================================

Program:   Phantom-Less Calibration GUI
Module:    $RCSfile: qlightwidget.h,v $
Creator:   Elvis C. S. Chen <chene@robarts.ca>
Language:  C++
Author:    $Author: Elvis Chen $  
Date:      $Date: 2013/05/03 15:45:30 $
Version:   $Revision: 0.99 $

==========================================================================

Copyright (c) Elvis C. S. Chen, elvis.chen@gmail.com

Use, modification and redistribution of the software, in source or
binary forms, are permitted provided that the following terms and
conditions are met:

1) Redistribution of the source code, in verbatim or modified
form, must retain the above copyright notice, this license,
the following disclaimer, and any notices that refer to this
license and/or the following disclaimer.  

2) Redistribution in binary form must include the above copyright
notice, a copy of this license and the following disclaimer
in the documentation or with other materials provided with the
distribution.

3) Modified copies of the source code must be clearly marked as such,
and must not be misrepresented as verbatim copies of the source code.

THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES PROVIDE THE SOFTWARE "AS IS"
WITHOUT EXPRESSED OR IMPLIED WARRANTY INCLUDING, BUT NOT LIMITED TO,
THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
PURPOSE.  IN NO EVENT SHALL ANY COPYRIGHT HOLDER OR OTHER PARTY WHO MAY
MODIFY AND/OR REDISTRIBUTE THE SOFTWARE UNDER THE TERMS OF THIS LICENSE
BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, LOSS OF DATA OR DATA BECOMING INACCURATE
OR LOSS OF PROFIT OR BUSINESS INTERRUPTION) ARISING IN ANY WAY OUT OF
THE USE OR INABILITY TO USE THE SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGES.


=========================================================================*/

/*
* shamelessly copied from Usaf
*/

#ifndef _Q_LIGHT_WIDGET_H
#define _Q_LIGHT_WIDGET_H

#include <QWidget>

class QColor;

//////////////////////////////////////////////////////////////////////////
class QLightWidget : public QWidget
  {
Q_OBJECT

public:
  QLightWidget(QWidget *parent = 0);
  void SetColor(QColor &c){this->mColor=c;};

protected:
  virtual void paintEvent(QPaintEvent *);

protected:
  QColor mColor;

public slots:
  void RedOn();
  void GreenOn();
  void YellowOn();
  void BlueOn();
  };

#endif