searchByCountryCode()
{
	echo "Enter the country code to search: "
	read country_code
	grep $country_code data.csv

}

searchByTimeRef()
{
	echo "Enter the time reference to search: "
	read time_ref
	grep $time_ref data.csv
	
}

searchByAccount()
{
	echo "Enter the account to search: "
	read account
	grep $account data.csv
	
}

searchByCode()
{
	echo "Enter the code to search: "
	read code
	grep $code data.csv
	
}

searchByProduct()
{
	echo "Enter the code to search: "
	read product_type
	grep $product_type data.csv
	
}

searchByStatus()
{
	echo "Enter the status to search: "
	read status
	grep $status data.csv
	
}

echo "1.Search by country code"
echo "2.Search by time references"
echo "3.Search by account"
echo "4.Search by code"
echo "5.Search by product type"
echo "6.Search by status"


echo "Enter to the choosen number: "
read choose

if [ "$choose" -eq 1 ]; then
	searchByCountryCode
elif [ "$choose" -eq 2 ]; then
	searchByTimeRef
elif [ "$choose" -eq 3 ]; then
	searchByAccount
elif [ "$choose" -eq 4 ]; then
	searchByCode
elif [ "$choose" -eq 5 ]; then
	searchByProduct
elif [ "$choose" -eq 6 ]; then
	searchByStatus
else
	echo "Invalid!, Please enter the valid input 1 or 2."
fi