import sys

from PyQt4.QtGui import QApplication
from PyQt4.QtGui import QMainWindow

from PythonUi import Initializer
from PythonUi import wersja1

app = QApplication(sys.argv)
window = QMainWindow()
ui = wersja1.Ui_MainWindow()

ui.setupUi(window)

init = Initializer.Initializer(ui)
init.initFormats()
init.initCanalsNumber()

window.show()
sys.exit(app.exec_())