import sys

from PyQt4.QtGui import QApplication
from PyQt4.QtGui import QMainWindow

from PythonUi import wersja1

app = QApplication(sys.argv)
window = QMainWindow()
ui = wersja1.Ui_MainWindow()

ui.setupUi(window)

window.show()
sys.exit(app.exec_())