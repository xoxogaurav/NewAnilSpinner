using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MathManager : MonoBehaviour
{

    public Text quesLabel,a1,a2,a3,a4;

    int testA, testB,correctAnswer;
    string testSymbol;

    string[] symbols = { "+","-"};
   

    private void Start()
    {
        setQuestion();
    }

    public void setQuestion()
    {
        testA = Random.Range(30,50);
        testB = Random.Range(5, 30);
        testSymbol = symbols[Random.Range(0,symbols.Length)];
        quesLabel.text = testA + " " + testSymbol + " "+ testB + " = ";

        List<string> ansString = new List<string>();

        if(testSymbol=="+")
        {
            ansString.Add((testA + testB).ToString());
            correctAnswer = testA + testB;
            ansString.Add((testA + testB + Random.Range(1,3)).ToString());
            ansString.Add((testA + testB + Random.Range(4, 6)).ToString());
            ansString.Add((testA + testB + Random.Range(6, 10)).ToString());
        }
        else if(testSymbol=="-")
        {
            ansString.Add((testA - testB).ToString());
            correctAnswer = testA - testB;
            ansString.Add((testA - testB + Random.Range(1, 3)).ToString());
            ansString.Add((testA - testB + Random.Range(4, 6)).ToString());
            ansString.Add((testA - testB + Random.Range(6, 10)).ToString());
        }
        else
        {
            ansString.Add((testA / testB).ToString());
            correctAnswer = testA / testB;
            ansString.Add((testA / testB + Random.Range(1, 3)).ToString());
            ansString.Add((testA / testB + Random.Range(4, 6)).ToString());
            ansString.Add((testA / testB + Random.Range(6, 10)).ToString());
        }

        Shuffle(ansString);

        a1.text = ansString[0];
        a2.text = ansString[1];
        a3.text = ansString[2];
        a4.text = ansString[3];


    }


    public void Shuffle(IList ts)
    {
        var count = ts.Count;
        var last = count - 1;
        for (var i = 0; i < last; ++i)
        {
            var r = Random.Range(i, count);
            var tmp = ts[i];
            ts[i] = ts[r];
            ts[r] = tmp;
        }
    }


    public void selectAnswer(int choice)
    {
        if(choice == 1)
        {
            if(a1.text == correctAnswer.ToString())
            {
                //correct answer
                correctAnswerSelected();
            }
            else
            {
                //wrong answer
                incorrectAnswerSelected();
            }
        }
        else if(choice == 2)
        {
            if (a2.text == correctAnswer.ToString())
            {
                //correct answer
                correctAnswerSelected();
            }
            else
            {
                //wrong answer
                incorrectAnswerSelected();
            }
        }
        else if (choice == 3)
        {
            if (a3.text == correctAnswer.ToString())
            {
                //correct answer
                correctAnswerSelected();
            }
            else
            {
                //wrong answer
                incorrectAnswerSelected();
            }
        }
        else if (choice == 4)
        {
            if (a4.text == correctAnswer.ToString())
            {
                //correct answer
                correctAnswerSelected();
            }
            else
            {
                //wrong answer
                incorrectAnswerSelected();
            }
        }
    }

    public void correctAnswerSelected()
    {
        MessageManager.m.showRewardMessage("20");
        StartCoroutine(resetQuiz());
    }

    public void incorrectAnswerSelected()
    {
        MessageManager.m.showTryAgainMessage();
        StartCoroutine(resetQuiz());
    }

    IEnumerator resetQuiz()
    {
        yield return new WaitForSeconds(2.5f);
        setQuestion();
    }



}
