var havePlayed = false;
initPlayed();
function initPlayed()
{
	if(API.getBoothPosition() == 0)
	{
		setPlayed();
	}					
}
function setPlayed()
{
	havePlayed = true;
	API.sendChat("Leaving the booth after this tune...");
}
API.on(API.DJ_ADVANCE, onDjAdvance);
function onDjAdvance(data)
{
	if(havePlayed)
	{
		havePlayed = false;
		API.djLeave();
		API.off(API.DJ_ADVANCE, onDjAdvance);
	}
	else if (data != null && data.dj.username == API.getUser().username)
	{
		setPlayed();
	}
}
