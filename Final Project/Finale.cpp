#include <iostream>
using namespace std;

int main()
{
	int menuSelect;

	menuSelect = 2;

	cout << "Enter 1-4 to pick a genre of Quizes" << endl;
	cout << "1) Eminem Quiz" << endl;
	cout << "2) Youtube Quiz" << endl;
	cout << "3) Current Events" << endl;
	cout << "4) Info" << endl;
	cout << "5) Exit " << endl;

	cin >> menuSelect;

	if (menuSelect == 1)
	{
		cout << "You selected : Eminem Quiz";
		cout << endl;
		cout << "Welcome to the Eminem Quiz , I present to you the best rapper ever's respected quiz" << endl;
		
		int userSelect;
		cout << "What is Eminem's full name ?" << endl;
		cout << "1) Marshall Bruce Mathers" << endl << "2) Bruce Marshall Mathers" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1: 
			cout << "Right you are Stan !!!" << endl;
			break;

		case 2: 
			cout << "Wrong Name buddy ... I have no clue who you talking about " << endl;
		}

		userSelect;
		cout << "When is Em's B-day ?" << endl;
		cout << "1) October 20" << endl << "2) October 17" << endl << "3) October 18" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1: 
			cout << "That is my b-day ... now you know !!!!" << endl;
			break;

		case 2:
			cout << "Right on man !!!" << endl;
			break;

		case 3:
			cout << "Wrong option no even close " << endl;
			break;
		}

		userSelect;
		cout << "Where was he born ??" << endl;
		cout << "1) Detroit" << endl << "2) Kuwait" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Spot on Stan, you are surprising me .. I am impressed !!" << endl;
			break;

		case 2:
			cout << "Wrong man ... it's my detroit to me !!!!" << endl;
			break;
		}

		userSelect;
		cout << "Let's go change the topic to friends and family !!! Who are his friends and family(THERE ARE 3 OPTIONS, EVERY OPTION HAS 3 ANSWERS)" << endl;
		cout << "1)Dr. Dre , Proof , Paul Rosenberg" << endl << "2) Skylar Grey, rihana, Hailey , Debbie" << "3) Any other rapper" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right you are  !!!" << endl;
			break;

		case 2:
			cout << "Right again !!" << endl;
			break;

		case 3:
			cout << "That answer is wrong on so many levels, he talks beef about other rappers why should they be friends with him too" << endl;
			break;
		}

		userSelect; 
		cout << "Time to talk about singing !! Time to fill in the blanks" << endl;
		cout << "There is an amazing song featuring him and Dina Rae called ......." << endl;
		cout << "1) Superman" << endl << "2) Batman " << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right on man !!!!" << endl;
			break;

		case 2:
			cout << "Wrong but he is a great superhero" << endl;
			break;
		}

		userSelect;
		cout << "There is a song in which he apoligizes to his mom for mocking her  and that song is ....." << endl;
		cout << "1) Cleaning out my closet" << "2) Space Bound" << "3) Headlights" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Nope ... that song sucks :)" << endl;
			break;

		case 2:
			cout << "great song .. but not right !!" << endl;
			break;

		case 3:
			cout << "Right on ... The video is amazing " << endl;
		}

		userSelect;
		cout << "Good Job making it so far ... there is another song about his ex wife Kim , it's called .....(it  was one of the previous choices)" << endl;
		cout << "1) Space Bound" << endl << "2) When I'm Gone " << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right on !!!" << endl;
			break;

		case 2:
			cout << "Wrong choice .. that song is coming up though" << endl;
			break;
		}

		userSelect;
		cout << "What is Eminem's latest movie-realted project called ?" << endl;
		cout << "1) 8 mile part 2" << endl << "2) Southpaw" << "3) Compton" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << " Ha I wish that was a movie .. I would have know if that was !!" << endl;
			break;

		case 2:
			cout << "Right you are" << endl;
			break;

		case 3:
			cout << "That is close actually ... it counts" << endl;
			break;
		}

		userSelect;
		cout << "Eminem was in a song with Dr. Dre called 'I need a doctor', what does it signify ( ask riad for a hint)" << endl;
		cout << "1) Eminem's in need of Dre's help in his rap career" << endl << "2) He will help Dr. Dre survive through his life" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "You are a major Stan !!" << endl;
			break;

		case 2:
			cout << "He is old ... but that is not the point !!!" << endl;
			break;
		}

		userSelect;
		cout << "The song 'When I'm Gone' What is it about ?" << endl;
		cout << "1) Rap is ruining his relationship with his daughter" << endl << "2) Rap is ruining his realtionship with his wife" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right you are !!!" << endl;
			break;

		case 2: 
			cout << "The relationship with his wife was DESTROYED !!!" << endl;
			break;
		}

		userSelect;
		cout << "On april 26 , 2001 Someone died who was that ... He was VERY CLOSE TO HIM !!!!!!" << endl;
		cout << "1) His BFF Yelawolf" << endl << "2) his BFF proof" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Try watching a song called Like toy soldiers .. not best friend" << endl;
			break;

		case 2:
			cout << "Right on ... YOU WIN!!!" << endl;
			break;
		}

		cout << "You made it ... Please subscribe on my ifunny channel called 'breakingmarshall'" << endl;

		return 0;
	}

	if (menuSelect == 4)
	{
		cout << "This is my project made for the 2015 summer iDTech camp !!! ENJOY!!!" << endl;
	}

	if (menuSelect == 2)
	{
		int userSelect;
		cout << "Welcome to the Youtube Quiz ... A great way to introduce my top 7 youtube subscriptions to you !!!" << endl;
		cout << "Let's start with Youtube Channels about Singers ... I like rap, pop, and house ...  now it's time to guess which 3 channels I follow" << endl;
		cout << "1) Martin Garrix, Eminem , Pitbull" << endl << "2)  Kesha, Rihanna, Skrillex" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "YEAH ... THESE ARE ALL AMAZING !!!" << endl;
			break;

		case 2:
			cout << "Not even close !!" << endl;
			break;
		}

		userSelect;
		cout << "Now let's go talk about gaming channels .. My favs 3 channels ... (Hints Required)" << endl;
		cout << "1) Vanossgaming, BasicallyIdowork, Daithi De Nogla" << endl << "2) Vanoss, Mini Ladd, Basically" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Daithi is the worst, the rest are amazing !!!" << endl;
			break;

		case 2:
			cout << "Amazing Channels all of them !!!" << endl;
			break;
		}

		userSelect;
		cout << "Let's move onto Education !!! Which is the best channel I like (Hints Needed !!)" << endl;
		cout << "1) Vlog Brothers" << endl << "2) Crash Course" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "WRONG !!!" << endl;
			break;

		case 2:
			cout << "Great Channel !!!" << endl;
			break;
		}

		userSelect;
		cout << "There is a great House music creator, called ...." << endl;
		cout << "1) Martin Garrix" << endl << "2) Calvin Harris" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right on !!!" << endl;
			break;

		case 2:
			cout << "He is pretty good !!" << endl;
			break;
		}

		cout << "Thank you for your cooperation !!! Hope you enjoy the rest off the quizes !!!" << endl;
	}

	if (menuSelect == 3)
	{
		int userSelect;
		cout << "Welcome to the game of Current Life ... The game in which I ask you questions about Current Events" << endl;
		cout << "First Question, Who are the main characters in The hit Show 'Breaking Bad' ? " << endl;
		cout << "1) Walter White & Jessie Pinkman" << endl << "2) Walter Black & Jessie Redman" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right on !!! We have one last question about shows and we move onto news !!!" << endl;
			break;

		case 2:
			cout << "Go back and research your stuff !!!" << endl;
			break;
		}

		userSelect;
		cout << "A final question about shows ... Where is Dexter located ?" << endl;
		cout << "1) Detroit" << endl << "2) Miami" << endl << "3) New York City" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Wrong .. That's Eminem's City !!" << endl;
			break;

		case 2:
			cout << "Spot On !!" << endl;
			break;

		case 3:
			cout << "Wrong City dude !!" << endl;
			break;
		}

		userSelect;
		cout << "Recently there was a major event that involved many deaths in 3 countries (Kuwait,Lyon,Tunisia), what else happened on the same day ??" << endl;
		cout << "1) Gay Marriage Allowed" << endl << "2) Barack Obama resigned from being a president" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right on !!" << endl;
			break;

		case 2:
			cout << "Come on ... you gotta get your facts straight !!!" << endl;
			break;
		}

		userSelect;
		cout << "Someone recently quit from being a talk show host .. Who is that ?" << endl;
		cout << "1) Jimmy Fallon" << endl << "2) Jon Stewart" << endl << "3) Jon Oliver" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Wrong ... He will stay there forever !!" << endl;
			break;

		case 2:
			cout << "That is so true and sad at the same time !!" << endl;
			break;

		case 3:
			cout << "He is amazing but will stay forever !!" << endl;
			break;
		}

		userSelect;
		cout << "There was a major sporting event lately which I was PLANNING on watching.. What is it called ?" << endl;
		cout << "1) Ronda Rousey vs. Beth Coreia" << endl << "2) Tour de france " << endl << "3) Female Football" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Spot On .. !!!" << endl;
			break;

		case 2:
			cout << "Not probably !!" << endl;
			break;

		case 3:
			cout << "I was intended to !!" << endl;
			break;
		}

		userSelect;
		cout << "There was a major involving Bruce Jenner,  what was it ??" << endl;
		cout << "1) Gender Swap" << endl << "2) He killed someone" << endl;
		cin >> userSelect;

		switch (userSelect)
		{
		case 1:
			cout << "Right on !!!" << endl;
			break;

		case 2:
			cout << "WRONG !!!" << endl;
			break;
		}

		cout << "Thank you for answering my questions ... I hope you enjoy the rest of my program !!!" << endl;
	}
	return 0;

}