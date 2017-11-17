import random

def RunTrial( min, max, stopAtFirst, trialCount ):
    roll = random.randint( min, max )
    print( "Rolled " + str( roll ) )
    if ( roll == stopAtFirst ):
        return trialCount
    else:
        return RunTrial( min, max, stopAtFirst, trialCount+1 )


min = int( input( "Enter min value: " ) )
max = int( input( "Enter max value: " ) )
stopAtFirst = int( input( "Enter value to stop at: " ) )
count = int( input( "How many times to run experiment: " ) )
print( "" )

sum = 0

for i in range(count):
    trials = RunTrial( min, max, stopAtFirst, 1 )
    sum = sum + trials
    print( "" )
    print( "Trials ran: " + str( trials ) )

avg = sum / count


print( "Average amount of trials run: " + str( avg ) )

    
