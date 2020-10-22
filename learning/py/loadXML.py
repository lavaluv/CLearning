import xml.etree.ElementTree as ET
import os

root = os.getcwd()+'/CLearning/learning/py/xml'
five_tuple_set = set()

class FiveTuple:
    def __init__(self,srcIp,srcPort,destIp,destPort,prot,tag):
        self.srcIp = srcIp
        self.srcPort = srcPort
        self.destIp = destIp
        self.destPort = destPort
        self.prot = prot
        self.tag = tag
    def getFiveTupleString(self):
        return self.srcIp+'_'+self.srcPort+'_'+self.destIp+'_'+self.destPort+'_'+self.prot
def constructShellCMD(FiveTupleInput):
    return ''
try:
    file_name = os.listdir(root)
    file_list = [os.path.join(root,files) for files in file_name]
    for filePath in file_list:
        try:
            xmlObject = ET.parse(filePath)
        except:
            print("xml parse err!")
            exit()
        xmlRoot = xmlObject.getroot()
        try:
            for ele in xmlRoot:
                print(ele.tag,ele.text)
                for inner in ele:
                    if len(list(inner)) == 0:
                        print(inner.tag,inner.text)
        except:
            print("get ele err!")
            exit()
        try:
            for fiveEle in five_tuple_set:
                os.system(constructShellCMD(fiveEle))
        except:
            print("TShark exec err!")
            exit()
except:
    pass
