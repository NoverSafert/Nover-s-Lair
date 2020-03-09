#THIS PROGRAM WAS CREATED BY NOVER SAFERT

import logging
from openpyxl import Workbook 
from openpyxl import load_workbook
import webbrowser
wb = Workbook()

def xlsx_loader():
    wb1 = load_workbook('Mangacheck.xlsx')
    logging.debug('xlsx loaded successfully')
    logging.debug( wb1.sheetnames)
    return (wb1)

def webcheck():


def MangaAdder():


def main():
    logging.basicConfig(level=logging.DEBUG, format=' %(asctime)s - %(levelname)s - %(message)s')
    logging.debug('Start of program')
    wb1 = xlsx_loader()

main()