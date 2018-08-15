#------------------------------
#autuor:lizhihao
#data:2018.8.05
#description:segment
#------------------------------

#/bin/bash

#remove all data
if test -e 1.dat; then
read -p "Do you choose delete data(Y/N):" choose
if [ $choose = Y ];then
rm -r *.dat
echo "rm success"
elif [ $choose = y ];then
rm -r *.dat
echo "rm success"
fi
fi

#Create external folders
if test -d AP_data; then
echo "AP_data exist"
else
mkdir AP_data
chmod 777 AP_data
fi

#Create an internal folder
cd AP_data
if test -d AP1_data; then
echo "data files exist"
echo "remove all files and data"
      rm -r *_data
echo "remove success"
echo "mkdir seven files"
for i in 1 2 3 4 5 6 7
do
      mkdir AP${i}_data
done
chmod -R 777 *_data
echo "mkdir files success"
else
echo "mkdir seven files"
for i in 1 2 3 4 5 6 7
do
      mkdir AP${i}_data
done
echo "mkdir files success"
chmod -R 777 *_data
fi

#Performs segmentation
cd ..
read -p "Start the program(Y/N):" start
if [ $start = Y ];then
#if ! test -e a.out; then
gcc trunction.c
#fi
chmod 777 a.out
./a.out
echo "completed!"
elif [ $start = y ];then
if ! test -e a.out; then
gcc trunction.c
fi
chmod 777 a.out
./a.out
echo "completed!"
fi


