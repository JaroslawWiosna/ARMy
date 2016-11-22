# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'wersja1.ui'
#
# Created by: PyQt4 UI code generator 4.11.4
#
# WARNING! All changes made in this file will be lost!

from PyQt4 import QtCore, QtGui

try:
    _fromUtf8 = QtCore.QString.fromUtf8
except AttributeError:
    def _fromUtf8(s):
        return s

try:
    _encoding = QtGui.QApplication.UnicodeUTF8
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig, _encoding)
except AttributeError:
    def _translate(context, text, disambig):
        return QtGui.QApplication.translate(context, text, disambig)

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName(_fromUtf8("MainWindow"))
        MainWindow.resize(800, 600)
        self.centralwidget = QtGui.QWidget(MainWindow)
        self.centralwidget.setObjectName(_fromUtf8("centralwidget"))
        self.gridLayoutWidget = QtGui.QWidget(self.centralwidget)
        self.gridLayoutWidget.setGeometry(QtCore.QRect(30, 20, 280, 341))
        self.gridLayoutWidget.setObjectName(_fromUtf8("gridLayoutWidget"))
        self.gridLayout = QtGui.QGridLayout(self.gridLayoutWidget)
        self.gridLayout.setObjectName(_fromUtf8("gridLayout"))
        self.formatIn = QtGui.QComboBox(self.gridLayoutWidget)
        self.formatIn.setObjectName(_fromUtf8("formatIn"))
        self.gridLayout.addWidget(self.formatIn, 0, 1, 1, 1)
        self.formatOut = QtGui.QComboBox(self.gridLayoutWidget)
        self.formatOut.setObjectName(_fromUtf8("formatOut"))
        self.gridLayout.addWidget(self.formatOut, 1, 1, 1, 1)
        self.label = QtGui.QLabel(self.gridLayoutWidget)
        self.label.setLayoutDirection(QtCore.Qt.LeftToRight)
        self.label.setAlignment(QtCore.Qt.AlignLeading|QtCore.Qt.AlignLeft|QtCore.Qt.AlignVCenter)
        self.label.setObjectName(_fromUtf8("label"))
        self.gridLayout.addWidget(self.label, 0, 0, 1, 1)
        self.sampleFrequency = QtGui.QLineEdit(self.gridLayoutWidget)
        self.sampleFrequency.setObjectName(_fromUtf8("sampleFrequency"))
        self.gridLayout.addWidget(self.sampleFrequency, 2, 1, 1, 1)
        self.canalsNumber = QtGui.QLineEdit(self.gridLayoutWidget)
        self.canalsNumber.setObjectName(_fromUtf8("canalsNumber"))
        self.gridLayout.addWidget(self.canalsNumber, 4, 1, 1, 1)
        self.label_2 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_2.setObjectName(_fromUtf8("label_2"))
        self.gridLayout.addWidget(self.label_2, 1, 0, 1, 1)
        self.bitResoultion = QtGui.QLineEdit(self.gridLayoutWidget)
        self.bitResoultion.setObjectName(_fromUtf8("bitResoultion"))
        self.gridLayout.addWidget(self.bitResoultion, 3, 1, 1, 1)
        self.echoDelay = QtGui.QLineEdit(self.gridLayoutWidget)
        self.echoDelay.setObjectName(_fromUtf8("echoDelay"))
        self.gridLayout.addWidget(self.echoDelay, 5, 1, 1, 1)
        self.lowerBandAmp = QtGui.QLineEdit(self.gridLayoutWidget)
        self.lowerBandAmp.setObjectName(_fromUtf8("lowerBandAmp"))
        self.gridLayout.addWidget(self.lowerBandAmp, 8, 1, 1, 1)
        self.lowFiltFreq = QtGui.QLineEdit(self.gridLayoutWidget)
        self.lowFiltFreq.setObjectName(_fromUtf8("lowFiltFreq"))
        self.gridLayout.addWidget(self.lowFiltFreq, 6, 1, 1, 1)
        self.highFiltFreq = QtGui.QLineEdit(self.gridLayoutWidget)
        self.highFiltFreq.setObjectName(_fromUtf8("highFiltFreq"))
        self.gridLayout.addWidget(self.highFiltFreq, 7, 1, 1, 1)
        self.label_5 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_5.setObjectName(_fromUtf8("label_5"))
        self.gridLayout.addWidget(self.label_5, 4, 0, 1, 1)
        self.label_8 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_8.setObjectName(_fromUtf8("label_8"))
        self.gridLayout.addWidget(self.label_8, 7, 0, 1, 1)
        self.label_6 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_6.setObjectName(_fromUtf8("label_6"))
        self.gridLayout.addWidget(self.label_6, 5, 0, 1, 1)
        self.label_3 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_3.setObjectName(_fromUtf8("label_3"))
        self.gridLayout.addWidget(self.label_3, 2, 0, 1, 1)
        self.label_7 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_7.setObjectName(_fromUtf8("label_7"))
        self.gridLayout.addWidget(self.label_7, 6, 0, 1, 1)
        self.label_4 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_4.setObjectName(_fromUtf8("label_4"))
        self.gridLayout.addWidget(self.label_4, 3, 0, 1, 1)
        self.label_9 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_9.setObjectName(_fromUtf8("label_9"))
        self.gridLayout.addWidget(self.label_9, 8, 0, 1, 1)
        self.higherBandAmp = QtGui.QLineEdit(self.gridLayoutWidget)
        self.higherBandAmp.setObjectName(_fromUtf8("higherBandAmp"))
        self.gridLayout.addWidget(self.higherBandAmp, 9, 1, 1, 1)
        self.label_10 = QtGui.QLabel(self.gridLayoutWidget)
        self.label_10.setObjectName(_fromUtf8("label_10"))
        self.gridLayout.addWidget(self.label_10, 9, 0, 1, 1)
        self.saveAndRun = QtGui.QPushButton(self.gridLayoutWidget)
        sizePolicy = QtGui.QSizePolicy(QtGui.QSizePolicy.Minimum, QtGui.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(0)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.saveAndRun.sizePolicy().hasHeightForWidth())
        self.saveAndRun.setSizePolicy(sizePolicy)
        self.saveAndRun.setMaximumSize(QtCore.QSize(16777215, 16777215))
        self.saveAndRun.setObjectName(_fromUtf8("saveAndRun"))
        self.gridLayout.addWidget(self.saveAndRun, 10, 0, 1, 2)
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtGui.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 800, 21))
        self.menubar.setObjectName(_fromUtf8("menubar"))
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtGui.QStatusBar(MainWindow)
        self.statusbar.setObjectName(_fromUtf8("statusbar"))
        MainWindow.setStatusBar(self.statusbar)

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        MainWindow.setWindowTitle(_translate("MainWindow", "MainWindow", None))
        self.label.setText(_translate("MainWindow", "Format wejściowy", None))
        self.label_2.setText(_translate("MainWindow", "Format wyjściowy", None))
        self.label_5.setText(_translate("MainWindow", "Liczba kanałów", None))
        self.label_8.setText(_translate("MainWindow", "Częstotliwość górnego filtru", None))
        self.label_6.setText(_translate("MainWindow", "Opóźnienia echa", None))
        self.label_3.setText(_translate("MainWindow", "Częstotliwość próbkowania", None))
        self.label_7.setText(_translate("MainWindow", "Częstotliwość dolnego filtru", None))
        self.label_4.setText(_translate("MainWindow", "Rozdzielczość bitowa", None))
        self.label_9.setText(_translate("MainWindow", "Wzmocnienie dolnego pasma", None))
        self.label_10.setText(_translate("MainWindow", "Wzmocnienie górnego pasma", None))
        self.saveAndRun.setText(_translate("MainWindow", "Zapisz i uruchom", None))

