19CS10061
SHASHANK SUROJU		

			
COMPILER :
		g++ (MinGW.org GCC Build-2) 9.2.0
		Copyright (C) 2019 Free Software Foundation, Inc.



CLASS Station:
	name is implemented as private string
	constructor,destructor and copy constructor are implemented
	GetName() method returns name
	Prints The name for station
	UnitTestStation checks the methods and construction of Station
	(not done the unittest part)

CLASS Railways:
	Singleton Object with Name IndianRailways					
	So constructor is put in private to block
	Has map of Stations with station names 
	Has map of Distances with station names
	GetStation returns Station
	GetDistance returns Distance
	UnitTestRailways checks the methods and construction of Railways
	(not done the unittest part)

CLASS Date:
	monthNames are implemented as static 2d array
	Month and Day are taken as enums
	it has date,month,year
	constructor,destructor and copy constructor are implemented
	Prints The date in slides format

CLASS BookingClasses:
	This has BookingClasses as Abstract Base class
	Then Seat and Berth are its Sub Classes and they are also Abstract Base Classes
	In Seat we have ACChairCar and SecondSitting as leafs which are concrete classes
	In Berth we have Sleeper,AC3Tier,AC2Tier,ACFirstClass and FirstClass as leafs which are also Concrete classes
	In all the leaf nodes we have LoadFactor and luxury as Static double and bool variables
	Also in BookingClasses we have GetLoadFactor,GetName,IsSitting,IsAC,GetNumberOfTires,IsLuxury as pure virtual methods
	These are implemented in leaf Classes

Class Booking:
	This has From and To station,date,pnr,fare
	It also has Base Fare,PNR Serial,Ac Sur Charge,Luxury Tax as statics
	Also it has list of Bookings in private
	ComputeFare method calculates and stores the fare
	



