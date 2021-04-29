import csv

#Search by country code 
def searchByCountryCode():
    country_code = input('Enter the country code: ')
    csv_file = csv.reader(open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r'))

    for row in csv_file:
        if country_code == row[4]:
            print(row)

#Search by time reference
def searchByTimeRef():
    time_ref = str(input('Enter the time reference: '))
    csv_file = csv.reader(open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r'))

    for row in csv_file:
        if time_ref == row[1]:
            print(row)

#Search by product type
def searchByProduct():
    product_type = input('Enter the product type: ')
    csv_file = csv.reader(open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r'))

    for row in csv_file:
        if product_type == row[5]:
            print(row)

#Search by account
def searchByAccount():
    account = input('Enter the account: ')
    csv_file = csv.reader(open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r'))

    for row in csv_file:
        if account == row[2]:
            print(row)

#Search by code
def searchByCode():
    code = input('Enter the code: ')
    csv_file = csv.reader(open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r'))

    for row in csv_file:
        if code == row[3]:
            print(row)

#Search by status
def searchByStatus():
    status = input('Enter the status: ')
    csv_file = csv.reader(open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r'))

    for row in csv_file:
        if status == row[7]:
            print(row)

#Sorting Code.......
#Sorted CSV file by specific column in alphabatically order
def sortByColumn():
    import csv
    import operator

    csv_file = open('/Users/Shamim/Desktop/CSE425_Assignment/data.csv', 'r')
    csv = csv.reader(csv_file, delimiter=",")

    sort = sorted(csv, key=operator.itemgetter(4))

    for rows in sort:
        print(rows)

#Program criteria or features
print('1.Search by country code')
print('2.Search by time references')
print('3.Search by product type')
print('4.Search by account')
print('5.Search by code')
print('6.Search by status')
print('7.Sorted by country code column')

print('\n')
source = int(input('Enter your chosen number: '))

if source == 1:
    searchByCountryCode()
elif source == 2:
    searchByTimeRef()
elif source == 3:
    searchByProduct()
elif source == 4:
    searchByAccount()
elif source == 5:
    searchByCode()
elif source == 6:
    searchByStatus()
elif source == 7:
    sortByColumn()
else:
    print('Sorry, Invalid Input!')

