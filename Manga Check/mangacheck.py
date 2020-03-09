#THIS PROGRAM WAS CREATED BY NOVER SAFERT

import logging
from openpyxl import Workbook 
import webbrowser
wb = Workbook()

def xlsx_loader():
    ws = wb.active
    ws = wb.create_sheet("MySheet")
    ws.title = "Mangas"
    ws.sheet_properties.tabColor = "1072BA"
    logging.debug('xlsx loaded successfully')
    wb.save("Mangacheck.xlsx")

def main():
    logging.basicConfig(level=logging.DEBUG, format=' %(asctime)s - %(levelname)s - %(message)s')
    logging.debug('Start of program')
    xlsx_loader()

main()