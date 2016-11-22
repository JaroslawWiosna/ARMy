class Initializer(object):
    def __init__(self, graphic_interface):
        self.graphicInterface = graphic_interface
        self.inFormats = ["mp3", "ogg"]
        self.outFormats = ["mp3", "ogg"]
        self.canalsNumber = "2"

    def initFormats(self):
        for format in self.inFormats:
            self.graphicInterface.formatIn.addItem(format)
        for format in self.outFormats:
            self.graphicInterface.formatOut.addItem(format)

    def initCanalsNumber(self):
        self.graphicInterface.canalsNumber.setText(self.canalsNumber)
        self.graphicInterface.canalsNumber.setDisabled(True)
