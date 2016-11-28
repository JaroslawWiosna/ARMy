"# ARMY" 

#Install dependencies
 - Lame:<br />
sudo apt-get install libmp3lame-dev

#Building
 - mkdir build
 - cd build
 - cmake ../src/
 - make
 - ./audio

# Do before commit
git stash; git pull --rebase origin master; git stash pop

#example of the stream usage
#http://stackoverflow.com/questions/2495420/is-there-any-lame-c-wraper-simplifier-working-on-linux-mac-and-win-from-pure/2496831#2496831

