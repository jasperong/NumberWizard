using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class NumberWizard : MonoBehaviour {
	int min;
	int max;
	int guess;
	public int maxGuessesAllowed = 10;
	public Text text;
	// Use this for initialization
	void Start () {
		StartGame();
	}

	void StartGame () {
		min = 1;
		max = 1000;
		NextGuess();
	}

	public void GuessHigher () {
		min = guess;
		NextGuess();
	}

	public void GuessLower () {
		max = guess;
		NextGuess();
	}

	void NextGuess () {
		guess = Random.Range(min + 1, max + 1);
		text.text = guess.ToString();
		maxGuessesAllowed--;

		if (maxGuessesAllowed <= 0) {
			SceneManager.LoadScene("Win");
		}
	}

}
