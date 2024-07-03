#include <stdio.h>
int main()
{
  int day, fog, car, tail;
  scanf("%d %d %d", &day, &fog, &car);
  tail = car % 10;
  if (fog < 200)
  {
    printf("%d no", tail);
  }
  else if (fog >= 200 && fog < 400)
  {
    switch (day)
    {
    case 6:
    case 7:
      printf("%d no", tail);
      break;
    case 1:
      switch (tail)
      {
      case 1:
      case 6:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    case 2:
      switch (tail)
      {
      case 2:
      case 7:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    case 3:
      switch (tail)
      {
      case 3:
      case 8:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    case 4:
      switch (tail)
      {
      case 4:
      case 9:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    case 5:
      switch (tail)
      {
      case 5:
      case 0:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    }
  }
  else
  {
    switch (day)
    {
    case 1:
    case 3:
    case 5:
      switch (tail)
      {
      case 1:
      case 3:
      case 5:
      case 7:
      case 9:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    case 2:
    case 4:
      switch (tail)
      {
      case 0:
      case 2:
      case 4:
      case 6:
      case 8:
        printf("%d yes", tail);
        break;

      default:
        printf("%d no", tail);
        break;
      }
      break;
    default:
      printf("%d no", tail);
      break;
    }
  }
  return 0;
}